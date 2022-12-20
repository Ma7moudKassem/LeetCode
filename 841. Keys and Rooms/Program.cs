
HashSet<int> enteredRoom = new();
bool CanVisitAllRooms(IList<IList<int>> rooms)
{
    EnterRoom(0, rooms);

    return enteredRoom.Count() == rooms.Count();
}
void EnterRoom(int roomKey, IList<IList<int>> rooms)
{
    enteredRoom.Add(roomKey);
    IList<int> keysInRoom = rooms[roomKey];
    foreach (int key in keysInRoom)
    {
        if (!enteredRoom.Contains(key))
            EnterRoom(key, rooms);
    }
}