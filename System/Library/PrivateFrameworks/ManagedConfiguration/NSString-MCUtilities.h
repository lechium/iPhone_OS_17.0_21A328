//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (MCUtilities)
+ (id)MCMakeUUID;	// IMP=0x008000000001e96d
- (unsigned int)MCHash;	// IMP=0x001000000001e7fa
- (id)MCSHA256DigestWithSalt:(id)arg1;	// IMP=0x001000000001e69d
- (id)MCSHA256DigestWithPasscodeSalt;	// IMP=0x001000000001e617
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;	// IMP=0x001000000001e4c7
- (id)MCOldStyleSafeFilenameHash;	// IMP=0x001000000001e4b3
- (id)MCHashedIdentifier;	// IMP=0x001000000001e461
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;	// IMP=0x001000000001e36c
- (id)MCHashedFilenameWithExtension:(id)arg1;	// IMP=0x001000000001e350
- (id)MCRemoveAppExternalVersionIDParameter;	// IMP=0x001000000009fc3d
- (id)MCAppendGreenteaSuffix;	// IMP=0x001000000009fbaa
@end

