**Class:** `Solution`

**Method:** `public List<Integer> findAllPeople(int n, int[][] meetings, int firstPerson)`

**Purpose:** Finds people who know a secret after a series of meetings.

**Logic:**

1. **Data Structures:**
   - `scrtKnowers`: Set to store people who know the secret.
   - `dSet`: Disjoint-Set to track connections based on meeting times.

2. **Preprocessing:**
   - Sort `meetings` by meeting time.

3. **Initialization:**
   - Add 0 and `firstPerson` to `scrtKnowers`.
   - Create a Disjoint-Set of size `n`.
   - Union 0 and `firstPerson` in `dSet`.

4. **Process Meetings:**
   - Call `haveMeetings(meetings, n)` to process meetings chronologically.

5. **Return Result:**
   - Return a list of people in `scrtKnowers`.

**Helper Function:** `private void haveMeetings(int[][] meetings, int totalPersons)`

   - Iterate through meetings, grouped by time:
     - For each meeting time group:
       - Union people in each meeting using `dSet.union`.
     - After processing all meetings at the current time:
       - For each meeting in the group:
         - If either person is connected to a secret knower:
           - Add both people to `scrtKnowers`.
         - Otherwise, break temporary connections using `dSet.breakBond`.

**Key Points:**

- Uses Disjoint-Set to track connections efficiently.
- Processes meetings in chronological order.
- Employs a two-step approach:
   - Union people within each meeting time group.
   - Check connections and update `scrtKnowers`.
- Breaks temporary connections after each time group.

**Assumptions:**

- Meetings are represented as `[person1, person2, time]` arrays.
- People are indexed from 0 to `n-1`.
