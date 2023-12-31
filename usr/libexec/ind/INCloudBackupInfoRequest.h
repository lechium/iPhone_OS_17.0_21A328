//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface INCloudBackupInfoRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_backupDeviceUDID;	// 16 = 0x10
}

+ (Class)responseClass;	// IMP=0x0040000000001cc6
- (void).cxx_destruct;	// IMP=0x0020000000001eea
- (id)urlRequest;	// IMP=0x0010000000001e63
- (id)urlString;	// IMP=0x0010000000001d02
- (id)init;	// IMP=0x0010000000001cd7
- (id)initWithAccount:(id)arg1 withBackupDeviceUDID:(id)arg2;	// IMP=0x0010000000001c24

@end

