//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KCSharingMergeConflict : NSObject
{
    long long _type;	// 8 = 0x8
    id _incomingDatabaseItem;	// 16 = 0x10
    id _outgoingDatabaseItem;	// 24 = 0x18
    id _mirrorDatabaseItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000019bcb8
@property(readonly, nonatomic) id mirrorDatabaseItem; // @synthesize mirrorDatabaseItem=_mirrorDatabaseItem;
@property(readonly, nonatomic) id outgoingDatabaseItem; // @synthesize outgoingDatabaseItem=_outgoingDatabaseItem;
@property(readonly, nonatomic) id incomingDatabaseItem; // @synthesize incomingDatabaseItem=_incomingDatabaseItem;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)resolveWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x001000000019b33c
- (id)initWithRemotelyDeletedIncomingDatabaseItem:(struct SecDbItem *)arg1 locallyDeletedOutgoingDatabaseItem:(struct SecDbItem *)arg2 mirrorDatabaseItem:(struct SecDbItem *)arg3;	// IMP=0x001000000019b2bc
- (id)initWithRemotelyDeletedIncomingDatabaseItem:(struct SecDbItem *)arg1 locallyChangedOutgoingDatabaseItem:(struct SecDbItem *)arg2 mirrorDatabaseItem:(struct SecDbItem *)arg3;	// IMP=0x001000000019b23c
- (id)initWithRemotelyChangedIncomingDatabaseItem:(struct SecDbItem *)arg1 locallyChangedOutgoingDatabaseItem:(struct SecDbItem *)arg2;	// IMP=0x001000000019b1cf
- (id)initWithRemotelyChangedIncomingDatabaseItem:(struct SecDbItem *)arg1 locallyDeletedOutgoingDatabaseItem:(struct SecDbItem *)arg2;	// IMP=0x001000000019b162

@end
