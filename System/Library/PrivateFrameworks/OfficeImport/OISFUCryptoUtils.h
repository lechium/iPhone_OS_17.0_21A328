//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OISFUCryptoUtils : NSObject
{
}

+ (id)sha1HashFromStorage:(id)arg1;	// IMP=0x008000000028e57a
+ (id)sha256HashFromString:(id)arg1;	// IMP=0x008000000028e53e
+ (id)sha256HashFromStorage:(id)arg1;	// IMP=0x008000000028e444
+ (id)sha256HashFromData:(id)arg1;	// IMP=0x008000000028e2d7
+ (id)decodePassphraseHint:(id)arg1;	// IMP=0x008000000028e25a
+ (id)encodePassphraseHint:(id)arg1;	// IMP=0x008000000028e240
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(_Bool)arg4 zipStream:(id *)arg5;	// IMP=0x008000000028e152
+ (id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(_Bool)arg3 zipStream:(id *)arg4;	// IMP=0x008000000028e05a
+ (_Bool)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1;	// IMP=0x008000000028e001
+ (_Bool)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2;	// IMP=0x008000000028dc95
+ (id)saltForSageFiles;	// IMP=0x008000000028dc60
+ (id)saltFromVerifier:(id)arg1 saltLength:(unsigned long long)arg2;	// IMP=0x008000000028daf2
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg1;	// IMP=0x008000000028da39
+ (id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2;	// IMP=0x008000000028d534
+ (unsigned int)ivLengthForKey:(id)arg1;	// IMP=0x008000000028d512
+ (id)hashForPassphrase:(id)arg1 withSalt:(id)arg2;	// IMP=0x008000000028d49a
+ (id)generateRandomSaltWithLength:(unsigned long long)arg1;	// IMP=0x008000000028d417
+ (id)generateRandomSalt;	// IMP=0x008000000028d3f8
+ (_Bool)generateRandomDataInBuffer:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000028d39a

@end
