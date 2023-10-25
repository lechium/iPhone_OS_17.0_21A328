//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PDSharingManagementService-Protocol.h"

@class NSString, PKPassShare, PKSharingGenericMessage, PKSharingMessage;
@protocol PDSharingChannelEndpoint;

@protocol PDStatefulSharingManagementService <PDSharingManagementService>
- (void)rejectInvitation:(PKSharingMessage *)arg1 completion:(void (^)(PKSharingMessage *, NSError *))arg2;
- (void)retryActivationCodeForShare:(PKPassShare *)arg1 activationCode:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)acceptStatefulSharingMessage:(PKSharingMessage *)arg1 endpoint:(id <PDSharingChannelEndpoint>)arg2 activationCode:(NSString *)arg3 completion:(void (^)(PDStatefulShareAcceptanceResponse *, NSError *))arg4;
- (void)handleIncomingMessage:(PKSharingGenericMessage *)arg1 endpoint:(id <PDSharingChannelEndpoint>)arg2 share:(PKPassShare *)arg3 completion:(void (^)(_Bool))arg4;
@end
