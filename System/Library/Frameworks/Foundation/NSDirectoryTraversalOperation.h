//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOperation.h"

@class NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSDirectoryTraversalOperation : NSOperation
{
    id _delegate;	// 8 = 0x8
    NSString *_sourcePath;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    void *_stream;	// 32 = 0x20
    int _optionsFlags;	// 40 = 0x28
    int _lastDeviceInode;	// 44 = 0x2c
    _Bool _shouldFilterUnderbars;	// 48 = 0x30
    _Bool _stopped;	// 49 = 0x31
    NSMutableArray *_deviceEntryPoints;	// 56 = 0x38
    NSMutableArray *_deviceNumbers;	// 64 = 0x40
}

+ (id)directoryTraversalOperationAtPath:(id)arg1;	// IMP=0x00600000006517bb
+ (_Bool)_needsStatInfo;	// IMP=0x00600000006516d2
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;	// IMP=0x00600000006516b8
- (void)dealloc;	// IMP=0x0000000000651f5e
- (void)main;	// IMP=0x0000000000651c77
- (_Bool)_validatePaths:(id *)arg1;	// IMP=0x0000000000651c6f
- (void)_handleFTSEntry:(struct _ftsent *)arg1;	// IMP=0x0000000000651b51
- (_Bool)shouldProceedAfterError:(id)arg1;	// IMP=0x0000000000651af7
- (void)_setError:(id)arg1;	// IMP=0x0000000000651aba
- (id)error;	// IMP=0x0000000000651a9c
- (_Bool)_shouldFilterEntry:(struct _ftsent *)arg1;	// IMP=0x000000000065186b
- (void)handlePathname:(id)arg1;	// IMP=0x0000000000651813
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000651802
- (id)delegate;	// IMP=0x00000000006517f1
- (id)initWithPath:(id)arg1;	// IMP=0x00000000006516da

@end

