//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SearchListOrderedDataSource : NSObject
{
    NSArray *_orderedObjects;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
}

+ (long long)searchResultTypeWithGEOType:(long long)arg1;	// IMP=0x0020000000c7f842
- (void).cxx_destruct;	// IMP=0x0020000000c7f88b
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
- (void)_createSectionsWithObjects:(id)arg1 searchSectionList:(id)arg2;	// IMP=0x0010000000c7ef6d
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0010000000c7ee35
- (id)viewForHeaderInSection:(long long)arg1 isFirstNonEmptySection:(_Bool)arg2;	// IMP=0x0010000000c7ed55
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x0010000000c7ecba
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x0010000000c7ec28
@property(readonly, nonatomic) long long numberOfSections;
- (id)initWithObjects:(id)arg1 searchSectionList:(id)arg2;	// IMP=0x0010000000c7eb42
- (id)initWithObjects:(id)arg1;	// IMP=0x0010000000c7eb13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

