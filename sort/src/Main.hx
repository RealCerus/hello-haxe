import haxe.ds.List;

class Main {
    static public function main() {
        var list:List<Int> = new List();
        for (i in 0...15) {
            list.add(Std.int(Math.random() * 100));
        }

        trace('Sorting list $list');
        trace("");

        trace("Merge sort:");
        var mergeSort = new MergeSortingAlgorithm();
        var sortedList = mergeSort.sort(list);
        trace(sortedList);
        trace("");

        trace("Bubble sort: //Doesnt work atm");
        var bubbleSort = new BubbleSortingAlgorithm();
        var sortedList = bubbleSort.sort(list);
        trace(sortedList);
    }
}
