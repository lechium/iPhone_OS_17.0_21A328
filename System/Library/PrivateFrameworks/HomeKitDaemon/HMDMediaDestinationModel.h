//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationModel
{
}

+ (id)logCategory;	// IMP=0x00100000006679aa
+ (id)properties;	// IMP=0x001000000066797a
@property(readonly, copy) NSString *description;
- (id)attributeDescriptions;	// IMP=0x0000000000667c6e
- (id)privateDescription;	// IMP=0x0000000000667c5c
- (id)logIdentifier;	// IMP=0x0000000000667c0c
- (id)initWithDestination:(id)arg1 changeType:(unsigned long long)arg2;	// IMP=0x0000000000667b68

// Remaining properties
@property(retain) NSUUID *audioGroupIdentifier; // @dynamic audioGroupIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSNumber *supportedOptions; // @dynamic supportedOptions;
@property(retain) NSNumber *type; // @dynamic type;

@end

