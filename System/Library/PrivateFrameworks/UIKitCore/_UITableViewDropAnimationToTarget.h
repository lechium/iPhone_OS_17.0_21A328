//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDragPreviewTarget, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToTarget
{
    _Bool _didSearchForCell;	// 40 = 0x28
    UIDragPreviewTarget *_target;	// 48 = 0x30
    UITableViewCell *_cell;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000001260dac
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool didSearchForCell; // @synthesize didSearchForCell=_didSearchForCell;
@property(retain, nonatomic) UIDragPreviewTarget *target; // @synthesize target=_target;
- (id)cellForTargetContainerInTableView:(id)arg1;	// IMP=0x0000000001260bee
- (id)initWithDragItem:(id)arg1 target:(id)arg2;	// IMP=0x0000000001260b76

@end
