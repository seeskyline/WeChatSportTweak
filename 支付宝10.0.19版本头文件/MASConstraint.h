//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MASConstraint : NSObject
{
    _Bool _updateExisting;
    id <MASConstraintDelegate> _delegate;
}

@property(nonatomic) __weak id <MASConstraintDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool updateExisting; // @synthesize updateExisting=_updateExisting;
- (void).cxx_destruct;
- (void)uninstall;
- (void)install;
- (void)deactivate;
- (void)activate;
- (void)setOffset:(double)arg1;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setSizeOffset:(struct CGSize)arg1;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (CDUnknownBlockType)key;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (id)centerYWithinMargins;
- (id)centerXWithinMargins;
- (id)trailingMargin;
- (id)leadingMargin;
- (id)bottomMargin;
- (id)topMargin;
- (id)rightMargin;
- (id)leftMargin;
- (id)baseline;
- (id)centerY;
- (id)centerX;
- (id)height;
- (id)width;
- (id)trailing;
- (id)leading;
- (id)bottom;
- (id)right;
- (id)top;
- (id)left;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)and;
- (id)with;
- (void)setLayoutConstantWithValue:(id)arg1;
- (CDUnknownBlockType)mas_offset;
- (CDUnknownBlockType)valueOffset;
- (CDUnknownBlockType)offset;
- (CDUnknownBlockType)centerOffset;
- (CDUnknownBlockType)sizeOffset;
- (CDUnknownBlockType)insets;
- (CDUnknownBlockType)priorityHigh;
- (CDUnknownBlockType)priorityMedium;
- (CDUnknownBlockType)priorityLow;
- (CDUnknownBlockType)mas_lessThanOrEqualTo;
- (CDUnknownBlockType)lessThanOrEqualTo;
- (CDUnknownBlockType)mas_greaterThanOrEqualTo;
- (CDUnknownBlockType)greaterThanOrEqualTo;
- (CDUnknownBlockType)mas_equalTo;
- (CDUnknownBlockType)equalTo;
- (id)init;

@end

