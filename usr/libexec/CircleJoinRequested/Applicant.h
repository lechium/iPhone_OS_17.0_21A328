//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface Applicant : NSObject
{
    int _applicantUIState;	// 8 = 0x8
    struct __OpaqueSOSPeerInfo *_rawPeerInfo;	// 16 = 0x10
}

@property struct __OpaqueSOSPeerInfo *rawPeerInfo; // @synthesize rawPeerInfo=_rawPeerInfo;
@property int applicantUIState; // @synthesize applicantUIState=_applicantUIState;
@property(readonly) NSString *applicantUIStateName;
@property(readonly) NSString *deviceType;
- (id)description;	// IMP=0x0010000000001dd0
- (void)dealloc;	// IMP=0x0010000000001d91
@property(readonly) NSString *name;
@property(readonly) NSString *idString;
- (id)initWithPeerInfo:(struct __OpaqueSOSPeerInfo *)arg1;	// IMP=0x0010000000001ce3

@end
