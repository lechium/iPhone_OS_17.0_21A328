//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPActivity : NSObject
{
    long long _intervalSec;	// 8 = 0x8
}

+ (_Bool)runRemote;	// IMP=0x00400000000093a7
+ (_Bool)ignoreCancellation;	// IMP=0x001000000000939f
+ (unsigned long long)taskID;	// IMP=0x0010000000009331
+ (const char *)identifier;	// IMP=0x001000000000930e
+ (void)notImplementedException:(id)arg1;	// IMP=0x0010000000009261
@property long long intervalSec; // @synthesize intervalSec=_intervalSec;
- (void)registerActivity;	// IMP=0x00100000000093af
- (void)execute:(id)arg1;	// IMP=0x001000000000937f
- (_Bool)oneShot;	// IMP=0x0010000000009377
- (id)criteria;	// IMP=0x0010000000009354

@end
