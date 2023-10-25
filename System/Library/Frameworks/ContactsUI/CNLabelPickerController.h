//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyGroupItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNLabelPickerController
{
    CNPropertyGroupItem *_item;	// 8 = 0x8
    NSMutableArray *_labelsToDeleteOnCommit;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018149d
@property(retain) NSMutableArray *labelsToDeleteOnCommit; // @synthesize labelsToDeleteOnCommit=_labelsToDeleteOnCommit;
@property(readonly, nonatomic) __weak CNPropertyGroupItem *item; // @synthesize item=_item;
- (void)pickedItem:(id)arg1;	// IMP=0x0000000000181268
- (void)removeCustomItem:(id)arg1;	// IMP=0x00000000001811ff
- (id)titleForPickerItem:(id)arg1;	// IMP=0x00000000001811e6
- (id)initForPropertyItem:(id)arg1;	// IMP=0x00000000001809f4

@end
