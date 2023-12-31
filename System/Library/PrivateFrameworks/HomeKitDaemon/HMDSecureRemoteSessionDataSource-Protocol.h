//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, HMDSecureRemoteStream, NSUUID;

@protocol HMDSecureRemoteSessionDataSource <NSObject>
- (HMDSecureRemoteStream *)createSecureStreamWithPeerDevice:(HMDDevice *)arg1 clientMode:(_Bool)arg2 sessionID:(NSUUID *)arg3;
@end

