/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UILabel;

@interface _UIMonogramView : UIView {
    UILabel *_label;
    NSString *_monogram;
    NSString *_name;
}

@property(retain) UILabel * label;
@property(copy) NSString * monogram;
@property(copy) NSString * name;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelForMonogram:(id)arg1;
- (void)layoutSubviews;
- (id)monogram;
- (id)monogramForName:(id)arg1;
- (id)name;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabel:(id)arg1;
- (void)setMonogram:(id)arg1;
- (void)setName:(id)arg1;

@end