//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOperation.h"

@class NSError, NSFileManager, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation
{
    NSFileManager *_fm;	// 8 = 0x8
    NSString *_removePath;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    void *_state;	// 32 = 0x20
}

+ (id)filesystemItemRemoveOperationWithPath:(id)arg1 fileManager:(id)arg2;	// IMP=0x0060000000653443
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;	// IMP=0x0060000000652fbc
@property(readonly) NSFileManager *fileManager; // @synthesize fileManager=_fm;
- (void)dealloc;	// IMP=0x000000000065367e
- (void)main;	// IMP=0x000000000065347e
- (id)initWithPath:(id)arg1 fileManager:(id)arg2;	// IMP=0x00000000006533bc
- (_Bool)_delegateSaysProceedAfterError:(id)arg1 removingItemAtPath:(id)arg2;	// IMP=0x00000000006531eb
- (_Bool)_delegateSaysShouldRemoveItemAtPath:(id)arg1;	// IMP=0x00000000006530af
- (void)_setError:(id)arg1;	// IMP=0x0000000000653072
- (id)error;	// IMP=0x0000000000653054

@end

