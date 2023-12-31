//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APStorageManager;

@interface APFileSystemAdapter : NSObject
{
    APStorageManager *_secureFileManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000f736e
@property(retain, nonatomic) APStorageManager *secureFileManager; // @synthesize secureFileManager=_secureFileManager;
- (id)getStorageInfo;	// IMP=0x00100000000f727c
- (id)enumeratorForFilesWithExtension:(id)arg1;	// IMP=0x00100000000f71a5
- (_Bool)fileExists:(id)arg1;	// IMP=0x00100000000f6fec
- (_Bool)setLastModifiedDate:(id)arg1 toFile:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000f6dfb
- (id)getFileLastModifiedDate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f6c05
- (_Bool)removeFile:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f6a1b
- (id)readDataFromFile:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f676a
- (_Bool)writeData:(id)arg1 toFile:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000f644b
- (id)fileToFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000f6434
- (id)init;	// IMP=0x00100000000f63c7

@end

