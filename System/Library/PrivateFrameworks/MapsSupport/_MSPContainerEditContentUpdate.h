//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol MSPImmutableObject, MSPMutableObject;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditContentUpdate
{
    id <MSPMutableObject> _updatedObject;	// 8 = 0x8
    id <MSPImmutableObject> _updatedImmutableObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069fa5
@property(readonly, nonatomic) id <MSPImmutableObject> updatedImmutableObject; // @synthesize updatedImmutableObject=_updatedImmutableObject;
@property(readonly, nonatomic) id <MSPMutableObject> updatedObject; // @synthesize updatedObject=_updatedObject;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069e9a
@property(readonly, copy) NSString *description;
- (id)initWithUpdatedImmutableObject:(id)arg1;	// IMP=0x0000000000069d7d
- (id)initWithUpdatedObject:(id)arg1;	// IMP=0x0000000000069d0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

