//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol _UIActivityRecipientInterface <NSObject>
- (void)requestRecipientsForSessionID:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)requestMessagesRecipientInfoForSessionID:(NSString *)arg1 completionHandler:(void (^)(SFShareSheetRecipient *))arg2;
@end

