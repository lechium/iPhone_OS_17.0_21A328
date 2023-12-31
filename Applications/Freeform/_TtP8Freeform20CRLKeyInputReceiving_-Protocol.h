//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class _TtC8Freeform27CRLTextInputModifierKeyMask;

@protocol _TtP8Freeform20CRLKeyInputReceiving_ <NSObject>
- (void)spacebarTapped:(id)arg1;
- (void)arrowKeyReceivedInDirection:(unsigned long long)arg1 withModifierKeys:(_TtC8Freeform27CRLTextInputModifierKeyMask *)arg2;
- (void)deleteWordForward:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)escapePressed:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
@property(nonatomic, readonly) _Bool handlesSpacebar;
@property(nonatomic, readonly) _Bool wantsRawArrowKeyEvents;
@end

