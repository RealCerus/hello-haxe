import haxe.ds.List;

class BubbleSortingAlgorithm implements SortingAlgorithm {
    public function new() {
    }

    public function sort(ogList:List<Int>):List<Int> {
        var list = new List<Int>();
        for(item in ogList) list.add(item);

        var arr = new Array<Int>();
        arr.resize(list.length);

        for (idx in 0...list.length) {
            var item = list.pop();
            arr[idx] = item;
        }

        // ---

        for (n in arr.length...0) {
            for (i in 0...(n - 1)) {
                if (arr[i] > arr[i + 1]) {
                    var v = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = v;
                }
            }
        }

        for (item in arr) list.add(item);
        return list;
    }
}
