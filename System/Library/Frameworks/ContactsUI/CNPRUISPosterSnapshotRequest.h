//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PRUISPosterSnapshotRequest;

__attribute__((visibility("hidden")))
@interface CNPRUISPosterSnapshotRequest : NSObject
{
    PRUISPosterSnapshotRequest *_wrappedRequest;	// 8 = 0x8
}

+ (id)requestForConfiguration:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3 windowScene:(id)arg4 attachments:(id)arg5;	// IMP=0x0060000000352af3
+ (id)requestForConfiguration:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3;	// IMP=0x00600000003529e5
- (void).cxx_destruct;	// IMP=0x00000000003529d5
@property(readonly, nonatomic) PRUISPosterSnapshotRequest *wrappedRequest; // @synthesize wrappedRequest=_wrappedRequest;
- (id)initWithWrappedRequest:(id)arg1;	// IMP=0x0000000000352960

@end
