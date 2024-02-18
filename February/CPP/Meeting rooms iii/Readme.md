# Most Booked Meeting Room

## Class: Solution

This class contains a method to find the most booked meeting room given a list of meetings.

### Method: `mostBooked`

Finds the most booked meeting room given the number of meeting rooms and a list of meetings.

#### Parameters

- `n`: An integer representing the number of meeting rooms.
- `meetings`: A vector of vectors representing the start and end times of meetings.

#### Returns

An integer representing the index of the most booked meeting room.

### Approach

The `mostBooked` method finds the most booked meeting room given the number of meeting rooms and a list of meetings.

1. **Initialization:**
   - Initialize two vectors:
     - `ans` to store the number of meetings booked in each room.
     - `times` to store the end times of meetings in each room.
   - Sort the meetings based on their start times.

2. **Meeting Allocation:**
   - Iterate through each meeting in the sorted list:
     - Retrieve the start and end times of the current meeting.
     - Initialize variables `flag` and `minind` to track room availability and the index of the room with the earliest end time respectively.
     - Iterate through each room:
       - Find the room with the earliest end time (`times[j] < val`).
       - If the room is available (`times[j] <= start`), book the meeting in that room and update its end time.
       - If no room is available, book the meeting in the room with the earliest end time and update its end time.
   - Update the number of meetings booked in each room (`ans`) and the end times of meetings in each room (`times`).

3. **Most Booked Room:**
   - Find the index of the most booked meeting room (`id`) by iterating through the `ans` vector.
   - Return the index of the most booked meeting room.

The approach efficiently finds the most booked meeting room by iterating through the meetings and updating the booking status of each room based on availability and end times.
