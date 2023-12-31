//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFFluidCollectionViewUpdate;
@protocol SFFluidCollectionDataContainer, UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface SFFluidCollectionUnupdatedDataContainer : NSObject
{
    id <UICoordinateSpace> _coordinateSpace;	// 8 = 0x8
    id <SFFluidCollectionDataContainer> _updatedDataContainer;	// 16 = 0x10
    SFFluidCollectionViewUpdate *_update;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000100370
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (id)indexPathForDataSourceIndexPath:(id)arg1;	// IMP=0x000000000010029e
- (id)dataSourceIndexPathForIndexPath:(id)arg1;	// IMP=0x00000000001001e2
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x00000000001001a5
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (void)layoutWasInvalidatedWithContext:(id)arg1;	// IMP=0x0000000000100168
@property(readonly, nonatomic) id <SFFluidCollectionDataContainer> dataContainer;
- (id)initWithLayoutContainer:(id)arg1 update:(id)arg2;	// IMP=0x000000000010005f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

