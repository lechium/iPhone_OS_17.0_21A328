//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDataSection.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUStorageTipCollectionViewDataSection : PXDataSection
{
    long long _totalStorageSize;	// 8 = 0x8
    NSArray *_allItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000016ded6
@property(readonly, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
@property(readonly, nonatomic) long long totalStorageSize; // @synthesize totalStorageSize=_totalStorageSize;
- (id)objectAtIndex:(long long)arg1;	// IMP=0x000000000016de55
- (long long)count;	// IMP=0x000000000016de11
- (id)initWithOutlineObject:(id)arg1;	// IMP=0x000000000016dd8e
- (id)initWithZerosWithStorageTipCount:(long long)arg1;	// IMP=0x000000000016dc99
- (id)initWithSizesDictionary:(id)arg1 countsDictionary:(id)arg2;	// IMP=0x000000000016d935

@end

