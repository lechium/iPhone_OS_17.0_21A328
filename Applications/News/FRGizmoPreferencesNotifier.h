//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol FRGizmoPreferencesNotifierDelegate;

@interface FRGizmoPreferencesNotifier : NSObject
{
    int _notifyToken;	// 8 = 0x8
    id <FRGizmoPreferencesNotifierDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000064276
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(nonatomic) __weak id <FRGizmoPreferencesNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0010000000064206
- (id)init;	// IMP=0x001000000006409c

@end

