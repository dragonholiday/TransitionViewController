@class DSLThing;
@class DSLThingCell;


@interface DSLFirstViewController : UICollectionViewController

- (DSLThingCell*)collectionViewCellForThing:(DSLThing*)thing;

@end
