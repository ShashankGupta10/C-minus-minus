def min_aircraft_required(k, family_weights):
    # Sort the family members' weights in descending order.
    family_weights.sort(reverse=True)
    
    aircraft_count = 0
    i = 0

    # Process each family member to load them into aircraft.
    while i < len(family_weights):
        current_weight = family_weights[i]

        # Find the maximum weight passenger that can be in the aircraft.
        max_weight_passenger = k - current_weight

        # Look for the second passenger to fill the aircraft.
        j = i + 1
        while j < len(family_weights) and family_weights[j] > max_weight_passenger:
            j += 1

        # Load the family members into the aircraft.
        if j > i + 1:
            i = j - 1
        else:
            i += 2

        aircraft_count += 1

    return aircraft_count

# Example usage:
k = 300  # Maximum capacity of the aircraft (in weight units)
family_members = [120, 300, 150, 200, 100]  # Array of family members' weights

aircraft_needed = min_aircraft_required(k, family_members)
print("Minimum number of aircraft needed:", aircraft_needed)
