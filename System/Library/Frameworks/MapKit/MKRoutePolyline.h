//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKPolyline.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MKRoutePolyline : MKPolyline
{
    _Bool _requiresModernMap;	// 8 = 0x8
}

@property(nonatomic, getter=_requiresModernMap, setter=_setRequiresModernMap:) _Bool requiresModernMap; // @synthesize requiresModernMap=_requiresModernMap;
- (id)_stepWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000075830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

