//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID, XCTScreenRecordingRequest;
@protocol XCTDOrientationManager;

__attribute__((visibility("hidden")))
@interface XCTDScreenRecordingProvider : NSObject
{
    MISSING_TYPE *orientationManager;	// 8 = 0x8
    MISSING_TYPE *state;	// 0 = 0x0
}

+ (void)setIdeSessions:(id)arg1;	// IMP=0x0020000000058ac3
+ (id)ideSessions;	// IMP=0x0010000000058a6f
+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x00100000000589e3
- (void).cxx_destruct;	// IMP=0x004000000005c015
- (id)init;	// IMP=0x001000000005bfd1
- (void)stopScreenRecordingWithUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;	// IMP=0x001000000005bbac
- (void)startScreenRecordingWithRequest:(XCTScreenRecordingRequest *)arg1 completion:(void (^)(XCTAttachmentFutureMetadata *, NSError *))arg2;	// IMP=0x001000000005a32e
@property(nonatomic) __weak id <XCTDOrientationManager> orientationManager; // @synthesize orientationManager;

@end

