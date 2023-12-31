//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface XPCClient : NSObject
{
    NSString *_clientID;	// 8 = 0x8
    NSData *_auditTokenData;	// 16 = 0x10
    NSString *_bundlePath;	// 24 = 0x18
    NSString *_clientVersion;	// 32 = 0x20
    int _pid;	// 40 = 0x28
    NSString *_userAgent;	// 48 = 0x30
    NSString *_clientIDHeader;	// 56 = 0x38
}

+ (id)clientIDForConnection:(id)arg1;	// IMP=0x00400000000a6731
- (void).cxx_destruct;	// IMP=0x00200000000a692d
@property(readonly) NSString *clientIDHeader; // @synthesize clientIDHeader=_clientIDHeader;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a688e
- (unsigned long long)hash;	// IMP=0x00100000000a6878
- (id)description;	// IMP=0x00100000000a67f2
@property(readonly) NSString *userAgent;
@property(readonly) NSString *clientVersion;
@property(readonly) NSString *clientID;
@property(readonly) NSString *bundlePath;
@property(readonly) NSData *auditTokenData;
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000a6531
- (id)initWithApplicationID:(id)arg1;	// IMP=0x00100000000a6295
- (id)init;	// IMP=0x00100000000a6281

@end

