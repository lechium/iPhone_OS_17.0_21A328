//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NADLibraryPathMigrator : NSObject
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000d57e
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4;	// IMP=0x001000000000d347
- (void)migrate;	// IMP=0x001000000000d06f
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;	// IMP=0x001000000000cfb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
