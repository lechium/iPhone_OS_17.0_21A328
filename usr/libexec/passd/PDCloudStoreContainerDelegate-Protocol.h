//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, PDCloudStoreContainer, PKCloudStoreZoneInvitation;

@protocol PDCloudStoreContainerDelegate <NSObject>
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 reinitializeContainerAndInvalidateFirst:(_Bool)arg2;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 requestsSyncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg2;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 requestsZoneShareFromHandle:(NSString *)arg2 zoneName:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 removeZoneShareInvitationForHandle:(NSString *)arg2 zoneName:(NSString *)arg3 qualitOfService:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 sendZoneShareInvitation:(PKCloudStoreZoneInvitation *)arg2 recipientHandle:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 sendZoneShareInvitationForHandle:(NSString *)arg2 zoneName:(NSString *)arg3 permission:(long long)arg4 qualitOfService:(long long)arg5 completion:(void (^)(_Bool, NSError *))arg6;
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(PDCloudStoreContainer *)arg1;
- (void)cloudStoreContainerShouldScheduleSetupActivity:(PDCloudStoreContainer *)arg1;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 createdZoneWithName:(NSString *)arg2 forContainerName:(NSString *)arg3 scope:(long long)arg4;
@end
