//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol SCATDisplaySource <NSObject>
- (UIView *)scatBackCursorUIContextForDisplayID:(unsigned int)arg1;
- (UIView *)scatFrontCursorUIContextForDisplayID:(unsigned int)arg1;
- (UIView *)scatUIContextForDisplayID:(unsigned int)arg1;
- (UIView *)scatBackCursorUIContext;
- (UIView *)scatFrontCursorUIContext;
- (UIView *)scatUIContext;

@optional
- (void)showUIContext:(_Bool)arg1;
- (void)hideUIContext:(_Bool)arg1;
- (_Bool)isUIContextHidden;
@end

