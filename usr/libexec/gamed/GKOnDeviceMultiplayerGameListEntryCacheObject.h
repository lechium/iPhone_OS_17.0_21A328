//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKOnDeviceMultiplayerGameListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x000000000013a127
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x002000000013a134
- (id)internalRepresentation;	// IMP=0x0010000000139f7f

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(nonatomic) _Bool supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(nonatomic) _Bool supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;

@end
