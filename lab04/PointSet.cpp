//
// Created by Kati on 10/12/2022.
//

#include "PointSet.h"

void PointSet::computeDistances() {
    for (auto p: points) {
        for (auto q: points) {
            distances.emplace_back(p.distanceTo(q));//=pusch_back
        }
    }
}
