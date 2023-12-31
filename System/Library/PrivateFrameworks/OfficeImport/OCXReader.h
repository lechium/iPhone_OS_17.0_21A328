//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader
{
    OCPZipPackage *mZipPackage;	// 56 = 0x38
    const void *mDataBytes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000373c7a
@property(retain, nonatomic) OCPZipPackage *zipPackage; // @synthesize zipPackage=mZipPackage;
- (id)read;	// IMP=0x0000000000373c72
- (_Bool)start;	// IMP=0x00000000001909f6
- (void)restartReaderToUseDecryptedDocument;	// IMP=0x0000000000373c04
- (_Bool)retainDecryptorWithErrorCode:(int *)arg1;	// IMP=0x00000000001909fe
- (_Bool)isBinaryReader;	// IMP=0x0000000000190c82
- (_Bool)verifyFileFormat;	// IMP=0x0000000000373b9c

@end

