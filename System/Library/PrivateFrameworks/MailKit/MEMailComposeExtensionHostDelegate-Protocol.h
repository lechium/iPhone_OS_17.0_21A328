//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailKit/NSObject-Protocol.h>

@class MEComposeSession, NSUUID;

@protocol MEMailComposeExtensionHostDelegate <NSObject>
- (void)regenerateEmailAddressTokenChangesForSession:(MEComposeSession *)arg1 forContextUUID:(NSUUID *)arg2;
@end
