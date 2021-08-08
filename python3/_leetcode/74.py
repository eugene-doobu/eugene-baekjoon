class Solution(object):
    def binary_search(self, data, target):
        if len(data) == 1 and target == data[0]:
            return True
        if len(data) == 1 and target != data[0]:
            return False
        if len(data) == 0:
            return False

        medium = len(data) // 2
        if target == data[medium]:
            return True
        else:
            if target > data[medium]:
                return self.binary_search(data[medium+1:], target)
            else:
                return self.binary_search(data[:medium], target)
            
    def searchMatrix(self, matrix, target):
        if len(matrix) == 0:
            return False

        mediumMat = len(matrix) // 2

        if target > matrix[mediumMat][-1]:
            return self.searchMatrix(matrix[mediumMat+1:], target)
        elif target < matrix[mediumMat][0]:
            return self.searchMatrix(matrix[:mediumMat], target)
        else:
            return self.binary_search(matrix[mediumMat], target)
        