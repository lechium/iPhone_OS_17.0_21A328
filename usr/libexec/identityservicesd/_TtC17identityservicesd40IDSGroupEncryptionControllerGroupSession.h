//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC17identityservicesd38IDSGroupRootMaterialExchangeController, _TtC17identityservicesd39IDSGroupEncryptionKeyMaterialController;

@interface _TtC17identityservicesd40IDSGroupEncryptionControllerGroupSession : NSObject
{
    MISSING_TYPE *l;	// 0 = 0x0
    MISSING_TYPE *mkmController;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *skmController;	// 0 = 0x0
    MISSING_TYPE *mkmCache;	// 5102992 = 0x4ddd90
    MISSING_TYPE *skmCache;	// 9496 = 0x2518
    MISSING_TYPE *groupID;	// 5102992 = 0x4ddd90
    MISSING_TYPE *sessionID;	// 0 = 0x0
    MISSING_TYPE *rootExchangeController;	// 0 = 0x0
    MISSING_TYPE *participantProvider;	// 0 = 0x0
    MISSING_TYPE *idsdSessionProvider;	// 1667719007 = 0x63675f5f
    MISSING_TYPE *identityController;	// 1953523043 = 0x74706563
    MISSING_TYPE *cryptoHandler;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *materialProviders;	// 0 = 0x0
    MISSING_TYPE *needsMaterialUpdate;	// 5112488 = 0x4e02a8
    MISSING_TYPE *materialCurrentlySentToAVC;	// 102764 = 0x1916c
    MISSING_TYPE *materialGeneration;	// 5112488 = 0x4e02a8
    MISSING_TYPE *localParticipantID;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000048f090
- (id)init;	// IMP=0x001000000048f030
- (void)setKeyMaterialIsNeededForParticipant:(id)arg1 forMKM:(_Bool)arg2 forSKM:(_Bool)arg3;	// IMP=0x001000000048c140
@property(nonatomic, retain) _TtC17identityservicesd38IDSGroupRootMaterialExchangeController *rootExchangeController; // @synthesize rootExchangeController;
@property(nonatomic, readonly) _TtC17identityservicesd39IDSGroupEncryptionKeyMaterialController *skmController; // @synthesize skmController;
@property(nonatomic, readonly) _TtC17identityservicesd39IDSGroupEncryptionKeyMaterialController *mkmController; // @synthesize mkmController;

@end
