import unittest

from binarySearch import binary_search


class TestMain(unittest.TestCase):
    def test_binary_search(self):
        self.assertEqual(binary_search(), 3, msg="The index is not 3")