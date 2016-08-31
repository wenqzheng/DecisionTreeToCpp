
/*
This inline function was automatically generated using DecisionTreeToCpp Converter

It takes feature vector as single argument:
feature_vector[0] - sepal length (cm)
feature_vector[1] - sepal width (cm)
feature_vector[2] - petal length (cm)
feature_vector[3] - petal width (cm)


It returns index of predicted class:
0 - setosa
1 - versicolor
2 - virginica


Simply include this file to your project and use it
*/

inline int iris_decision_tree(std::vector * feature_vector) 
{
	if (feature_vector->at(2) <= 2.45 ) {
		return 0;
	}
	else {
		if (feature_vector->at(3) <= 1.75 ) {
			if (feature_vector->at(2) <= 4.95 ) {
				if (feature_vector->at(3) <= 1.65 ) {
					return 1;
				}
				else {
					return 2;
				}
			}
			else {
				if (feature_vector->at(3) <= 1.55 ) {
					return 2;
				}
				else {
					if (feature_vector->at(0) <= 6.95 ) {
						return 1;
					}
					else {
						return 2;
					}
				}
			}
		}
		else {
			if (feature_vector->at(2) <= 4.85 ) {
				if (feature_vector->at(0) <= 5.95 ) {
					return 1;
				}
				else {
					return 2;
				}
			}
			else {
				return 2;
			}
		}
	}
}