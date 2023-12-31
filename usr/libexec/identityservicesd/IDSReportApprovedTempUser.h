//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSString;

@interface IDSReportApprovedTempUser : FTIDSMessage
{
    NSString *_tempUserID;	// 232 = 0xe8
    long long _reportAction;	// 240 = 0xf0
    NSString *_responseMessage;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0020000000002e14
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property long long reportAction; // @synthesize reportAction=_reportAction;
@property(copy) NSString *tempUserID; // @synthesize tempUserID=_tempUserID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000002c39
- (id)messageBody;	// IMP=0x0010000000002b39
- (id)requiredKeys;	// IMP=0x0010000000002ae0
- (id)bagKey;	// IMP=0x0010000000002ad3
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000002ac5
- (_Bool)wantsManagedRetries;	// IMP=0x0010000000002abd
- (_Bool)wantsBodySignature;	// IMP=0x0010000000002ab5
- (int)maxTimeoutRetries;	// IMP=0x0010000000002aaa
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x0010000000002aa2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000029d4
- (id)init;	// IMP=0x0010000000002980

@end

