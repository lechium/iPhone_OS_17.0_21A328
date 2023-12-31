//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

@interface ExtractFileOperation : ISOperation
{
    long long _activeFileBytesCopied;	// 96 = 0x60
    NSString *_activeFilePath;	// 104 = 0x68
    NSString *_destinationFilePath;	// 112 = 0x70
    NSDictionary *_fileAttributes;	// 120 = 0x78
    double _lastSnapshotTime;	// 128 = 0x80
    NSString *_sourceFilePath;	// 136 = 0x88
    int;	// 144 = 0x90
}

@property int sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(retain) NSString *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(copy) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(retain) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
- (void)_updateProgressWithByteCount:(long long)arg1;	// IMP=0x00100000000896a0
- (_Bool)_performBOMCopy:(id *)arg1;	// IMP=0x0010000000088c1f
- (id)_newBOMCopierOptions;	// IMP=0x0010000000088bbb
- (void)_initializeProgress;	// IMP=0x0010000000088b06
- (void)_copierUpdatedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x0010000000088a95
- (void)_copierStartedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x0010000000088a32
- (void)_copierFinishedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x00100000000889fd
- (_Bool)_applyFileAttributesToDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008806c
- (void)run;	// IMP=0x0010000000087fe3
- (void)dealloc;	// IMP=0x0010000000087f7d

@end

