//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol HMAccessCodeModificationRequestValue <NSObject>
@property(copy) NSString *guestName;
@property(copy) NSUUID *userUUID;
@property(readonly, copy) NSUUID *accessoryUUID;
@end

