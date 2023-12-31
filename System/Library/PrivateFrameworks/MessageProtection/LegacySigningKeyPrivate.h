//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LegacySigningKeyPrivate : NSObject
{
    id _secKeyRef;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005b53
@property(retain, nonatomic) id secKeyRef; // @synthesize secKeyRef=_secKeyRef;
- (id)publicKey;	// IMP=0x0000000000005acd
- (id)dataRepresentation;	// IMP=0x0000000000005ab5
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005a93
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000594d
- (id)init;	// IMP=0x000000000000582e

@end

