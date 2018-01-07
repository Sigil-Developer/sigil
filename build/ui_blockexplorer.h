/********************************************************************************
** Form generated from reading UI file 'blockexplorer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKEXPLORER_H
#define UI_BLOCKEXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockExplorer
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *blockWidget;
    QGridLayout *blockGrid;
    QPushButton *blockButton;
    QSpinBox *numberBox;
    QLabel *blockTimeText;
    QLabel *blockTimeData;
    QLabel *hashText;
    QLabel *hashData;
    QLabel *merkleText;
    QLabel *merkleData;
    QLabel *baseText;
    QLabel *baseData;
    QLabel *diffText;
    QLabel *diffData;
    QLabel *coinSupplyText;
    QLabel *coinSupplyData;
    QLabel *blockTxText;
    QLabel *blockTxData;
    QSpacerItem *verticalSpacerMiddle;
    QPushButton *txButton;
    QLineEdit *txLine;
    QLabel *txText;
    QLabel *txData;
    QLabel *txTimeText;
    QLabel *txTimeData;
    QLabel *valueText;
    QLabel *valueData;
    QLabel *feeText;
    QLabel *feeData;
    QLabel *inputText;
    QLabel *inputData;
    QLabel *outputText;
    QLabel *outputData;
    QSpacerItem *verticalSpacerBottom;

    void setupUi(QDialog *BlockExplorer)
    {
        if (BlockExplorer->objectName().isEmpty())
            BlockExplorer->setObjectName(QString::fromUtf8("BlockExplorer"));
        BlockExplorer->setWindowModality(Qt::NonModal);
        BlockExplorer->setEnabled(true);
        BlockExplorer->resize(760, 470);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockExplorer->sizePolicy().hasHeightForWidth());
        BlockExplorer->setSizePolicy(sizePolicy);
        BlockExplorer->setMinimumSize(QSize(0, 0));
        BlockExplorer->setAcceptDrops(false);
        gridLayout = new QGridLayout(BlockExplorer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(10, 10, 10, 5);
        scrollArea = new QScrollArea(BlockExplorer);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        blockWidget = new QWidget();
        blockWidget->setObjectName(QString::fromUtf8("blockWidget"));
        blockWidget->setGeometry(QRect(0, 0, 736, 451));
        blockGrid = new QGridLayout(blockWidget);
        blockGrid->setSpacing(8);
        blockGrid->setContentsMargins(4, 4, 4, 4);
        blockGrid->setObjectName(QString::fromUtf8("blockGrid"));
        blockButton = new QPushButton(blockWidget);
        blockButton->setObjectName(QString::fromUtf8("blockButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(blockButton->sizePolicy().hasHeightForWidth());
        blockButton->setSizePolicy(sizePolicy1);
        blockButton->setMinimumSize(QSize(180, 26));

        blockGrid->addWidget(blockButton, 1, 0, 1, 1);

        numberBox = new QSpinBox(blockWidget);
        numberBox->setObjectName(QString::fromUtf8("numberBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(numberBox->sizePolicy().hasHeightForWidth());
        numberBox->setSizePolicy(sizePolicy2);
        numberBox->setMinimumSize(QSize(500, 0));
        numberBox->setMaximum(99999999);

        blockGrid->addWidget(numberBox, 1, 1, 1, 1);

        blockTimeText = new QLabel(blockWidget);
        blockTimeText->setObjectName(QString::fromUtf8("blockTimeText"));

        blockGrid->addWidget(blockTimeText, 2, 0, 1, 1);

        blockTimeData = new QLabel(blockWidget);
        blockTimeData->setObjectName(QString::fromUtf8("blockTimeData"));
        blockTimeData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(blockTimeData, 2, 1, 1, 1);

        hashText = new QLabel(blockWidget);
        hashText->setObjectName(QString::fromUtf8("hashText"));

        blockGrid->addWidget(hashText, 3, 0, 1, 1);

        hashData = new QLabel(blockWidget);
        hashData->setObjectName(QString::fromUtf8("hashData"));
        hashData->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hashData->sizePolicy().hasHeightForWidth());
        hashData->setSizePolicy(sizePolicy3);
        hashData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(hashData, 3, 1, 1, 1);

        merkleText = new QLabel(blockWidget);
        merkleText->setObjectName(QString::fromUtf8("merkleText"));

        blockGrid->addWidget(merkleText, 4, 0, 1, 1);

        merkleData = new QLabel(blockWidget);
        merkleData->setObjectName(QString::fromUtf8("merkleData"));
        sizePolicy3.setHeightForWidth(merkleData->sizePolicy().hasHeightForWidth());
        merkleData->setSizePolicy(sizePolicy3);
        merkleData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(merkleData, 4, 1, 1, 1);

        baseText = new QLabel(blockWidget);
        baseText->setObjectName(QString::fromUtf8("baseText"));

        blockGrid->addWidget(baseText, 5, 0, 1, 1);

        baseData = new QLabel(blockWidget);
        baseData->setObjectName(QString::fromUtf8("baseData"));
        sizePolicy3.setHeightForWidth(baseData->sizePolicy().hasHeightForWidth());
        baseData->setSizePolicy(sizePolicy3);
        baseData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(baseData, 5, 1, 1, 1);

        diffText = new QLabel(blockWidget);
        diffText->setObjectName(QString::fromUtf8("diffText"));

        blockGrid->addWidget(diffText, 6, 0, 1, 1);

        diffData = new QLabel(blockWidget);
        diffData->setObjectName(QString::fromUtf8("diffData"));
        diffData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(diffData, 6, 1, 1, 1);

        coinSupplyText = new QLabel(blockWidget);
        coinSupplyText->setObjectName(QString::fromUtf8("coinSupplyText"));

        blockGrid->addWidget(coinSupplyText, 7, 0, 1, 1);

        coinSupplyData = new QLabel(blockWidget);
        coinSupplyData->setObjectName(QString::fromUtf8("coinSupplyData"));
        coinSupplyData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(coinSupplyData, 7, 1, 1, 1);

        blockTxText = new QLabel(blockWidget);
        blockTxText->setObjectName(QString::fromUtf8("blockTxText"));
        blockTxText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        blockGrid->addWidget(blockTxText, 8, 0, 1, 1);

        blockTxData = new QLabel(blockWidget);
        blockTxData->setObjectName(QString::fromUtf8("blockTxData"));
        blockTxData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(blockTxData, 8, 1, 1, 1);

        verticalSpacerMiddle = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        blockGrid->addItem(verticalSpacerMiddle, 9, 0, 1, 1);

        txButton = new QPushButton(blockWidget);
        txButton->setObjectName(QString::fromUtf8("txButton"));
        sizePolicy1.setHeightForWidth(txButton->sizePolicy().hasHeightForWidth());
        txButton->setSizePolicy(sizePolicy1);
        txButton->setMinimumSize(QSize(180, 26));

        blockGrid->addWidget(txButton, 10, 0, 1, 1);

        txLine = new QLineEdit(blockWidget);
        txLine->setObjectName(QString::fromUtf8("txLine"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(txLine->sizePolicy().hasHeightForWidth());
        txLine->setSizePolicy(sizePolicy4);

        blockGrid->addWidget(txLine, 10, 1, 1, 1);

        txText = new QLabel(blockWidget);
        txText->setObjectName(QString::fromUtf8("txText"));

        blockGrid->addWidget(txText, 11, 0, 1, 1);

        txData = new QLabel(blockWidget);
        txData->setObjectName(QString::fromUtf8("txData"));
        txData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(txData, 11, 1, 1, 1);

        txTimeText = new QLabel(blockWidget);
        txTimeText->setObjectName(QString::fromUtf8("txTimeText"));

        blockGrid->addWidget(txTimeText, 12, 0, 1, 1);

        txTimeData = new QLabel(blockWidget);
        txTimeData->setObjectName(QString::fromUtf8("txTimeData"));
        txTimeData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(txTimeData, 12, 1, 1, 1);

        valueText = new QLabel(blockWidget);
        valueText->setObjectName(QString::fromUtf8("valueText"));

        blockGrid->addWidget(valueText, 13, 0, 1, 1);

        valueData = new QLabel(blockWidget);
        valueData->setObjectName(QString::fromUtf8("valueData"));
        valueData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(valueData, 13, 1, 1, 1);

        feeText = new QLabel(blockWidget);
        feeText->setObjectName(QString::fromUtf8("feeText"));

        blockGrid->addWidget(feeText, 14, 0, 1, 1);

        feeData = new QLabel(blockWidget);
        feeData->setObjectName(QString::fromUtf8("feeData"));
        feeData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(feeData, 14, 1, 1, 1);

        inputText = new QLabel(blockWidget);
        inputText->setObjectName(QString::fromUtf8("inputText"));
        inputText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        blockGrid->addWidget(inputText, 15, 0, 1, 1);

        inputData = new QLabel(blockWidget);
        inputData->setObjectName(QString::fromUtf8("inputData"));
        inputData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        inputData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(inputData, 15, 1, 1, 1);

        outputText = new QLabel(blockWidget);
        outputText->setObjectName(QString::fromUtf8("outputText"));
        outputText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        blockGrid->addWidget(outputText, 16, 0, 1, 1);

        outputData = new QLabel(blockWidget);
        outputData->setObjectName(QString::fromUtf8("outputData"));
        outputData->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        outputData->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        blockGrid->addWidget(outputData, 16, 1, 1, 1);

        verticalSpacerBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        blockGrid->addItem(verticalSpacerBottom, 17, 0, 1, 1);

        scrollArea->setWidget(blockWidget);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(BlockExplorer);

        QMetaObject::connectSlotsByName(BlockExplorer);
    } // setupUi

    void retranslateUi(QDialog *BlockExplorer)
    {
        BlockExplorer->setWindowTitle(QApplication::translate("BlockExplorer", "Block Explorer", 0, QApplication::UnicodeUTF8));
        blockButton->setText(QApplication::translate("BlockExplorer", "Decode block", 0, QApplication::UnicodeUTF8));
        blockTimeText->setText(QApplication::translate("BlockExplorer", "General data:", 0, QApplication::UnicodeUTF8));
        hashText->setText(QApplication::translate("BlockExplorer", "Hash:", 0, QApplication::UnicodeUTF8));
        hashData->setText(QApplication::translate("BlockExplorer", "0x0", 0, QApplication::UnicodeUTF8));
        merkleText->setText(QApplication::translate("BlockExplorer", "Merkle root:", 0, QApplication::UnicodeUTF8));
        merkleData->setText(QApplication::translate("BlockExplorer", "0x0", 0, QApplication::UnicodeUTF8));
        baseText->setText(QApplication::translate("BlockExplorer", "Coin base:", 0, QApplication::UnicodeUTF8));
        baseData->setText(QApplication::translate("BlockExplorer", "0x0", 0, QApplication::UnicodeUTF8));
        diffText->setText(QApplication::translate("BlockExplorer", "Difficulty, target, nonce:", 0, QApplication::UnicodeUTF8));
        diffData->setText(QApplication::translate("BlockExplorer", "0.00 0x0 0x0", 0, QApplication::UnicodeUTF8));
        coinSupplyText->setText(QApplication::translate("BlockExplorer", "Coin supply:", 0, QApplication::UnicodeUTF8));
        coinSupplyData->setText(QApplication::translate("BlockExplorer", "0.00 SGL", 0, QApplication::UnicodeUTF8));
        blockTxText->setText(QApplication::translate("BlockExplorer", "Payments:", 0, QApplication::UnicodeUTF8));
        blockTxData->setText(QApplication::translate("BlockExplorer", "N/A", 0, QApplication::UnicodeUTF8));
        txButton->setText(QApplication::translate("BlockExplorer", "Decode payment", 0, QApplication::UnicodeUTF8));
        txLine->setInputMask(QString());
        txText->setText(QApplication::translate("BlockExplorer", "Payment ID:", 0, QApplication::UnicodeUTF8));
        txData->setText(QApplication::translate("BlockExplorer", "N/A", 0, QApplication::UnicodeUTF8));
        txTimeText->setText(QApplication::translate("BlockExplorer", "General data:", 0, QApplication::UnicodeUTF8));
        txTimeData->setText(QString());
        valueText->setText(QApplication::translate("BlockExplorer", "Value:", 0, QApplication::UnicodeUTF8));
        valueData->setText(QApplication::translate("BlockExplorer", "0.00 SGL", 0, QApplication::UnicodeUTF8));
        feeText->setText(QApplication::translate("BlockExplorer", "Fee paid:", 0, QApplication::UnicodeUTF8));
        feeData->setText(QApplication::translate("BlockExplorer", "0.00 SGL", 0, QApplication::UnicodeUTF8));
        inputText->setText(QApplication::translate("BlockExplorer", "Inputs:", 0, QApplication::UnicodeUTF8));
        inputData->setText(QApplication::translate("BlockExplorer", "N/A", 0, QApplication::UnicodeUTF8));
        outputText->setText(QApplication::translate("BlockExplorer", "Outputs:", 0, QApplication::UnicodeUTF8));
        outputData->setText(QApplication::translate("BlockExplorer", "N/A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BlockExplorer: public Ui_BlockExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKEXPLORER_H
