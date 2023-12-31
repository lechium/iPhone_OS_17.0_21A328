//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AceObject, NSArray, NSString, NSUUID;
@protocol SRStarkItemController;

@protocol SRStarkItemControllerDelegate <NSObject>
- (void)starkItemControllerRequestsRestartSpeechSynthesis:(id <SRStarkItemController>)arg1;
- (void)starkItemControllerRequestsCancelSpeechSynthesis:(id <SRStarkItemController>)arg1;
- (void)starkItemController:(id <SRStarkItemController>)arg1 performAceCommands:(NSArray *)arg2 turnIdentifier:(NSUUID *)arg3 clearSnippetDisplay:(_Bool)arg4;
- (void)starkItemControllerItemViewDidAppear:(id <SRStarkItemController>)arg1 withAceObject:(AceObject *)arg2;
- (void)starkItemControllerRequestsReschedulingAutoDismiss:(id <SRStarkItemController>)arg1;
- (void)starkItemController:(id <SRStarkItemController>)arg1 requestsFullScreen:(_Bool)arg2;
- (void)starkItemControllerRequestsDismissal:(id <SRStarkItemController>)arg1 withDismissalReason:(long long)arg2;
- (void)starkItemController:(id <SRStarkItemController>)arg1 synthesizeSpeechWithText:(NSString *)arg2 completion:(void (^)(void))arg3;
@end

