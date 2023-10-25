//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUTemporaryDirectory : NSObject
{
    NSString *_path;	// 8 = 0x8
    _Bool _leak;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026f029
- (_Bool)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;	// IMP=0x000000000026ec2b
- (void)leakTemporaryDirectory;	// IMP=0x000000000026ec21
- (id)URL;	// IMP=0x000000000026ebfc
- (id)path;	// IMP=0x000000000026ebee
- (void)dealloc;	// IMP=0x000000000026eace
- (id)initForWritingToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000026e9bf
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;	// IMP=0x000000000026e918
- (id)initWithSignature:(id)arg1 error:(id *)arg2;	// IMP=0x000000000026e901
- (id)initWithError:(id *)arg1;	// IMP=0x000000000026e8e3
- (id)init;	// IMP=0x000000000026e7ba

@end
