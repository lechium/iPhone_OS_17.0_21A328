//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeStatusVisible-Protocol.h>
#import <Home/HFServiceNameComponentsProviding-Protocol.h>
#import <Home/HFShowInHomeDashboard-Protocol.h>
#import <Home/HFTileResizable-Protocol.h>
#import <Home/NSObject-Protocol.h>

@class HFAccessoryType, HMRoom, NAFuture, NSSet;
@protocol HFHomeKitObject;

@protocol HFAccessoryRepresentable <NSObject, HFServiceNameComponentsProviding, HFFavoritable, HFHomeStatusVisible, HFShowInHomeDashboard, HFTileResizable>
@property(readonly, nonatomic) NSSet *hf_associatedAccessories;
@property(readonly, nonatomic) NSSet *hf_containedProfiles;
@property(readonly, nonatomic) NSSet *hf_containedServices;
@property(readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property(readonly, nonatomic) _Bool hf_isIdentifiable;
@property(readonly, nonatomic) _Bool hf_canSpanMultipleRooms;
@property(readonly, nonatomic) HMRoom *hf_safeRoom;
@property(readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property(readonly, nonatomic) Class hf_itemClass;
@property(readonly, nonatomic) id <HFHomeKitObject> hf_homeKitObject;
- (NAFuture *)hf_moveToRoom:(HMRoom *)arg1;
- (_Bool)hf_isInRoom:(HMRoom *)arg1;
@end

