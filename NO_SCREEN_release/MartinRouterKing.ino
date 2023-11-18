/*
Copyright (c) 2018 Stefan Kremser
github.com/spacehuhn
*/
//       115200 baud   |   no line ending
// Settings //
const uint8_t channels[] = {1, 6, 11}; // Wi-Fi channels (available: 1-14)
// const bool wpa2 = true; 
const bool wpa2 = false; 
const bool appendSpaces = true; // makes all SSIDs 32 characters
// #include <Wire.h>
// #include <U8g2lib.h>
// #define OLED_ADDRESS 0x3C
// U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ 14, /* data=*/ 12, /* reset=*/ U8X8_PIN_NONE);
// int spinnerIndex = 0;
// char spinnerChars[] = {'I', '/', '-', '\\'};
/*
  - don't forget the \n
  - max. 32 characters
  - don't add dupes
*/
const char ssids[] PROGMEM = {
"Martin Router King 1\n"
"Martin Router King 2\n"
"Martin Router King 3\n"
"Martin Router King 4\n"
"Martin Router King 5\n"
"Martin Router King 6\n"
"Martin Router King 7\n"
"Martin Router King 8\n"
"Martin Router King 9\n"
"Martin Router King 10\n"
"Martin Router King 11\n"
"Martin Router King 12\n"
"Martin Router King 13\n"
"Martin Router King 14\n"
"Martin Router King 15\n"
"Martin Router King 16\n"
"Martin Router King 17\n"
"Martin Router King 18\n"
"Martin Router King 19\n"
"Martin Router King 20\n"
"Martin Router King 21\n"
"Martin Router King 22\n"
"Martin Router King 23\n"
"Martin Router King 24\n"
"Martin Router King 25\n"
"Martin Router King 26\n"
"Martin Router King 27\n"
"Martin Router King 28\n"
"Martin Router King 29\n"
"Martin Router King 30\n"
"Martin Router King 31\n"
"Martin Router King 32\n"
"Martin Router King 33\n"
"Martin Router King 34\n"
"Martin Router King 35\n"
"Martin Router King 36\n"
"Martin Router King 37\n"
"Martin Router King 38\n"
"Martin Router King 39\n"
"Martin Router King 40\n"
"Martin Router King 41\n"
"Martin Router King 42\n"
"Martin Router King 43\n"
"Martin Router King 44\n"
"Martin Router King 45\n"
"Martin Router King 46\n"
"Martin Router King 47\n"
"Martin Router King 48\n"
"Martin Router King 49\n"
"Martin Router King 50\n"
"Martin Router King 51\n"
"Martin Router King 52\n"
"Martin Router King 53\n"
"Martin Router King 54\n"
"Martin Router King 55\n"
"Martin Router King 56\n"
"Martin Router King 57\n"
"Martin Router King 58\n"
"Martin Router King 59\n"
"Martin Router King 60\n"
"Martin Router King 61\n"
"Martin Router King 62\n"
"Martin Router King 63\n"
"Martin Router King 64\n"
"Martin Router King 65\n"
"Martin Router King 66\n"
"Martin Router King 67\n"
"Martin Router King 68\n"
"Martin Router King 69\n"
"Martin Router King 70\n"
"Martin Router King 71\n"
"Martin Router King 72\n"
"Martin Router King 73\n"
"Martin Router King 74\n"
"Martin Router King 75\n"
"Martin Router King 76\n"
"Martin Router King 77\n"
"Martin Router King 78\n"
"Martin Router King 79\n"
"Martin Router King 80\n"
"Martin Router King 81\n"
"Martin Router King 82\n"
"Martin Router King 83\n"
"Martin Router King 84\n"
"Martin Router King 85\n"
"Martin Router King 86\n"
"Martin Router King 87\n"
"Martin Router King 88\n"
"Martin Router King 89\n"
"Martin Router King 90\n"
"Martin Router King 91\n"
"Martin Router King 92\n"
"Martin Router King 93\n"
"Martin Router King 94\n"
"Martin Router King 95\n"
"Martin Router King 96\n"
"Martin Router King 97\n"
"Martin Router King 98\n"
"Martin Router King 99\n"
"Martin Router King 100\n"
"Martin Router King 101\n"
"Martin Router King 102\n"
"Martin Router King 103\n"
"Martin Router King 104\n"
"Martin Router King 105\n"
"Martin Router King 106\n"
"Martin Router King 107\n"
"Martin Router King 108\n"
"Martin Router King 109\n"
"Martin Router King 110\n"
"Martin Router King 111\n"
"Martin Router King 112\n"
"Martin Router King 113\n"
"Martin Router King 114\n"
"Martin Router King 115\n"
"Martin Router King 116\n"
"Martin Router King 117\n"
"Martin Router King 118\n"
"Martin Router King 119\n"
"Martin Router King 120\n"
"Martin Router King 121\n"
"Martin Router King 122\n"
"Martin Router King 123\n"
"Martin Router King 124\n"
"Martin Router King 125\n"
"Martin Router King 126\n"
"Martin Router King 127\n"
"Martin Router King 128\n"
"Martin Router King 129\n"
"Martin Router King 130\n"
"Martin Router King 131\n"
"Martin Router King 132\n"
"Martin Router King 133\n"
"Martin Router King 134\n"
"Martin Router King 135\n"
"Martin Router King 136\n"
"Martin Router King 137\n"
"Martin Router King 138\n"
"Martin Router King 139\n"
"Martin Router King 140\n"
"Martin Router King 141\n"
"Martin Router King 142\n"
"Martin Router King 143\n"
"Martin Router King 144\n"
"Martin Router King 145\n"
"Martin Router King 146\n"
"Martin Router King 147\n"
"Martin Router King 148\n"
"Martin Router King 149\n"
"Martin Router King 150\n"
"Martin Router King 151\n"
"Martin Router King 152\n"
"Martin Router King 153\n"
"Martin Router King 154\n"
"Martin Router King 155\n"
"Martin Router King 156\n"
"Martin Router King 157\n"
"Martin Router King 158\n"
"Martin Router King 159\n"
"Martin Router King 160\n"
"Martin Router King 161\n"
"Martin Router King 162\n"
"Martin Router King 163\n"
"Martin Router King 164\n"
"Martin Router King 165\n"
"Martin Router King 166\n"
"Martin Router King 167\n"
"Martin Router King 168\n"
"Martin Router King 169\n"
"Martin Router King 170\n"
"Martin Router King 171\n"
"Martin Router King 172\n"
"Martin Router King 173\n"
"Martin Router King 174\n"
"Martin Router King 175\n"
"Martin Router King 176\n"
"Martin Router King 177\n"
"Martin Router King 178\n"
"Martin Router King 179\n"
"Martin Router King 180\n"
"Martin Router King 181\n"
"Martin Router King 182\n"
"Martin Router King 183\n"
"Martin Router King 184\n"
"Martin Router King 185\n"
"Martin Router King 186\n"
"Martin Router King 187\n"
"Martin Router King 188\n"
"Martin Router King 189\n"
"Martin Router King 190\n"
"Martin Router King 191\n"
"Martin Router King 192\n"
"Martin Router King 193\n"
"Martin Router King 194\n"
"Martin Router King 195\n"
"Martin Router King 196\n"
"Martin Router King 197\n"
"Martin Router King 198\n"
"Martin Router King 199\n"
"Martin Router King 200\n"
"Martin Router King 201\n"
"Martin Router King 202\n"
"Martin Router King 203\n"
"Martin Router King 204\n"
"Martin Router King 205\n"
"Martin Router King 206\n"
"Martin Router King 207\n"
"Martin Router King 208\n"
"Martin Router King 209\n"
"Martin Router King 210\n"
"Martin Router King 211\n"
"Martin Router King 212\n"
"Martin Router King 213\n"
"Martin Router King 214\n"
"Martin Router King 215\n"
"Martin Router King 216\n"
"Martin Router King 217\n"
"Martin Router King 218\n"
"Martin Router King 219\n"
"Martin Router King 220\n"
"Martin Router King 221\n"
"Martin Router King 222\n"
"Martin Router King 223\n"
"Martin Router King 224\n"
"Martin Router King 225\n"
"Martin Router King 226\n"
"Martin Router King 227\n"
"Martin Router King 228\n"
"Martin Router King 229\n"
"Martin Router King 230\n"
"Martin Router King 231\n"
"Martin Router King 232\n"
"Martin Router King 233\n"
"Martin Router King 234\n"
"Martin Router King 235\n"
"Martin Router King 236\n"
"Martin Router King 237\n"
"Martin Router King 238\n"
"Martin Router King 239\n"
"Martin Router King 240\n"
"Martin Router King 241\n"
"Martin Router King 242\n"
"Martin Router King 243\n"
"Martin Router King 244\n"
"Martin Router King 245\n"
"Martin Router King 246\n"
"Martin Router King 247\n"
"Martin Router King 248\n"
"Martin Router King 249\n"
"Martin Router King 250\n"
"Martin Router King 251\n"
"Martin Router King 252\n"
"Martin Router King 253\n"
"Martin Router King 254\n"
"Martin Router King 255\n"
"Martin Router King 256\n"
"Martin Router King 257\n"
"Martin Router King 258\n"
"Martin Router King 259\n"
"Martin Router King 260\n"
"Martin Router King 261\n"
"Martin Router King 262\n"
"Martin Router King 263\n"
"Martin Router King 264\n"
"Martin Router King 265\n"
"Martin Router King 266\n"
"Martin Router King 267\n"
"Martin Router King 268\n"
"Martin Router King 269\n"
"Martin Router King 270\n"
"Martin Router King 271\n"
"Martin Router King 272\n"
"Martin Router King 273\n"
"Martin Router King 274\n"
"Martin Router King 275\n"
"Martin Router King 276\n"
"Martin Router King 277\n"
"Martin Router King 278\n"
"Martin Router King 279\n"
"Martin Router King 280\n"
"Martin Router King 281\n"
"Martin Router King 282\n"
"Martin Router King 283\n"
"Martin Router King 284\n"
"Martin Router King 285\n"
"Martin Router King 286\n"
"Martin Router King 287\n"
"Martin Router King 288\n"
"Martin Router King 289\n"
"Martin Router King 290\n"
"Martin Router King 291\n"
"Martin Router King 292\n"
"Martin Router King 293\n"
"Martin Router King 294\n"
"Martin Router King 295\n"
"Martin Router King 296\n"
"Martin Router King 297\n"
"Martin Router King 298\n"
"Martin Router King 299\n"
"Martin Router King 300\n"
"Martin Router King 301\n"
"Martin Router King 302\n"
"Martin Router King 303\n"
"Martin Router King 304\n"
"Martin Router King 305\n"
"Martin Router King 306\n"
"Martin Router King 307\n"
"Martin Router King 308\n"
"Martin Router King 309\n"
"Martin Router King 310\n"
"Martin Router King 311\n"
"Martin Router King 312\n"
"Martin Router King 313\n"
"Martin Router King 314\n"
"Martin Router King 315\n"
"Martin Router King 316\n"
"Martin Router King 317\n"
"Martin Router King 318\n"
"Martin Router King 319\n"
"Martin Router King 320\n"
"Martin Router King 321\n"
"Martin Router King 322\n"
"Martin Router King 323\n"
"Martin Router King 324\n"
"Martin Router King 325\n"
"Martin Router King 326\n"
"Martin Router King 327\n"
"Martin Router King 328\n"
"Martin Router King 329\n"
"Martin Router King 330\n"
"Martin Router King 331\n"
"Martin Router King 332\n"
"Martin Router King 333\n"
"Martin Router King 334\n"
"Martin Router King 335\n"
"Martin Router King 336\n"
"Martin Router King 337\n"
"Martin Router King 338\n"
"Martin Router King 339\n"
"Martin Router King 340\n"
"Martin Router King 341\n"
"Martin Router King 342\n"
"Martin Router King 343\n"
"Martin Router King 344\n"
"Martin Router King 345\n"
"Martin Router King 346\n"
"Martin Router King 347\n"
"Martin Router King 348\n"
"Martin Router King 349\n"
"Martin Router King 350\n"
"Martin Router King 351\n"
"Martin Router King 352\n"
"Martin Router King 353\n"
"Martin Router King 354\n"
"Martin Router King 355\n"
"Martin Router King 356\n"
"Martin Router King 357\n"
"Martin Router King 358\n"
"Martin Router King 359\n"
"Martin Router King 360\n"
"Martin Router King 361\n"
"Martin Router King 362\n"
"Martin Router King 363\n"
"Martin Router King 364\n"
"Martin Router King 365\n"
"Martin Router King 366\n"
"Martin Router King 367\n"
"Martin Router King 368\n"
"Martin Router King 369\n"
"Martin Router King 370\n"
"Martin Router King 371\n"
"Martin Router King 372\n"
"Martin Router King 373\n"
"Martin Router King 374\n"
"Martin Router King 375\n"
"Martin Router King 376\n"
"Martin Router King 377\n"
"Martin Router King 378\n"
"Martin Router King 379\n"
"Martin Router King 380\n"
"Martin Router King 381\n"
"Martin Router King 382\n"
"Martin Router King 383\n"
"Martin Router King 384\n"
"Martin Router King 385\n"
"Martin Router King 386\n"
"Martin Router King 387\n"
"Martin Router King 388\n"
"Martin Router King 389\n"
"Martin Router King 390\n"
"Martin Router King 391\n"
"Martin Router King 392\n"
"Martin Router King 393\n"
"Martin Router King 394\n"
"Martin Router King 395\n"
"Martin Router King 396\n"
"Martin Router King 397\n"
"Martin Router King 398\n"
"Martin Router King 399\n"
"Martin Router King 400\n"
"Martin Router King 401\n"
"Martin Router King 402\n"
"Martin Router King 403\n"
"Martin Router King 404\n"
"Martin Router King 405\n"
"Martin Router King 406\n"
"Martin Router King 407\n"
"Martin Router King 408\n"
"Martin Router King 409\n"
"Martin Router King 410\n"
"Martin Router King 411\n"
"Martin Router King 412\n"
"Martin Router King 413\n"
"Martin Router King 414\n"
"Martin Router King 415\n"
"Martin Router King 416\n"
"Martin Router King 417\n"
"Martin Router King 418\n"
"Martin Router King 419\n"
"Martin Router King 420\n"
"Martin Router King 421\n"
"Martin Router King 422\n"
"Martin Router King 423\n"
"Martin Router King 424\n"
"Martin Router King 425\n"
"Martin Router King 426\n"
"Martin Router King 427\n"
"Martin Router King 428\n"
"Martin Router King 429\n"
"Martin Router King 430\n"
"Martin Router King 431\n"
"Martin Router King 432\n"
"Martin Router King 433\n"
"Martin Router King 434\n"
"Martin Router King 435\n"
"Martin Router King 436\n"
"Martin Router King 437\n"
"Martin Router King 438\n"
"Martin Router King 439\n"
"Martin Router King 440\n"
"Martin Router King 441\n"
"Martin Router King 442\n"
"Martin Router King 443\n"
"Martin Router King 444\n"
"Martin Router King 445\n"
"Martin Router King 446\n"
"Martin Router King 447\n"
"Martin Router King 448\n"
"Martin Router King 449\n"
"Martin Router King 450\n"
"Martin Router King 451\n"
"Martin Router King 452\n"
"Martin Router King 453\n"
"Martin Router King 454\n"
"Martin Router King 455\n"
"Martin Router King 456\n"
"Martin Router King 457\n"
"Martin Router King 458\n"
"Martin Router King 459\n"
"Martin Router King 460\n"
"Martin Router King 461\n"
"Martin Router King 462\n"
"Martin Router King 463\n"
"Martin Router King 464\n"
"Martin Router King 465\n"
"Martin Router King 466\n"
"Martin Router King 467\n"
"Martin Router King 468\n"
"Martin Router King 469\n"
"Martin Router King 470\n"
"Martin Router King 471\n"
"Martin Router King 472\n"
"Martin Router King 473\n"
"Martin Router King 474\n"
"Martin Router King 475\n"
"Martin Router King 476\n"
"Martin Router King 477\n"
"Martin Router King 478\n"
"Martin Router King 479\n"
"Martin Router King 480\n"
"Martin Router King 481\n"
"Martin Router King 482\n"
"Martin Router King 483\n"
"Martin Router King 484\n"
"Martin Router King 485\n"
"Martin Router King 486\n"
"Martin Router King 487\n"
"Martin Router King 488\n"
"Martin Router King 489\n"
"Martin Router King 490\n"
"Martin Router King 491\n"
"Martin Router King 492\n"
"Martin Router King 493\n"
"Martin Router King 494\n"
"Martin Router King 495\n"
"Martin Router King 496\n"
"Martin Router King 497\n"
"Martin Router King 498\n"
"Martin Router King 499\n"
"Martin Router King 500\n"
"Martin Router King 501\n"
"Martin Router King 502\n"
"Martin Router King 503\n"
"Martin Router King 504\n"
"Martin Router King 505\n"
"Martin Router King 506\n"
"Martin Router King 507\n"
"Martin Router King 508\n"
"Martin Router King 509\n"
"Martin Router King 510\n"
"Martin Router King 511\n"
"Martin Router King 512\n"
"Martin Router King 513\n"
"Martin Router King 514\n"
"Martin Router King 515\n"
"Martin Router King 516\n"
"Martin Router King 517\n"
"Martin Router King 518\n"
"Martin Router King 519\n"
"Martin Router King 520\n"
"Martin Router King 521\n"
"Martin Router King 522\n"
"Martin Router King 523\n"
"Martin Router King 524\n"
"Martin Router King 525\n"
"Martin Router King 526\n"
"Martin Router King 527\n"
"Martin Router King 528\n"
"Martin Router King 529\n"
"Martin Router King 530\n"
"Martin Router King 531\n"
"Martin Router King 532\n"
"Martin Router King 533\n"
"Martin Router King 534\n"
"Martin Router King 535\n"
"Martin Router King 536\n"
"Martin Router King 537\n"
"Martin Router King 538\n"
"Martin Router King 539\n"
"Martin Router King 540\n"
"Martin Router King 541\n"
"Martin Router King 542\n"
"Martin Router King 543\n"
"Martin Router King 544\n"
"Martin Router King 545\n"
"Martin Router King 546\n"
"Martin Router King 547\n"
"Martin Router King 548\n"
"Martin Router King 549\n"
"Martin Router King 550\n"
"Martin Router King 551\n"
"Martin Router King 552\n"
"Martin Router King 553\n"
"Martin Router King 554\n"
"Martin Router King 555\n"
"Martin Router King 556\n"
"Martin Router King 557\n"
"Martin Router King 558\n"
"Martin Router King 559\n"
"Martin Router King 560\n"
"Martin Router King 561\n"
"Martin Router King 562\n"
"Martin Router King 563\n"
"Martin Router King 564\n"
"Martin Router King 565\n"
"Martin Router King 566\n"
"Martin Router King 567\n"
"Martin Router King 568\n"
"Martin Router King 569\n"
"Martin Router King 570\n"
"Martin Router King 571\n"
"Martin Router King 572\n"
"Martin Router King 573\n"
"Martin Router King 574\n"
"Martin Router King 575\n"
"Martin Router King 576\n"
"Martin Router King 577\n"
"Martin Router King 578\n"
"Martin Router King 579\n"
"Martin Router King 580\n"
"Martin Router King 581\n"
"Martin Router King 582\n"
"Martin Router King 583\n"
"Martin Router King 584\n"
"Martin Router King 585\n"
"Martin Router King 586\n"
"Martin Router King 587\n"
"Martin Router King 588\n"
"Martin Router King 589\n"
"Martin Router King 590\n"
"Martin Router King 591\n"
"Martin Router King 592\n"
"Martin Router King 593\n"
"Martin Router King 594\n"
"Martin Router King 595\n"
"Martin Router King 596\n"
"Martin Router King 597\n"
"Martin Router King 598\n"
"Martin Router King 599\n"
"Martin Router King 600\n"
"Martin Router King 601\n"
"Martin Router King 602\n"
"Martin Router King 603\n"
"Martin Router King 604\n"
"Martin Router King 605\n"
"Martin Router King 606\n"
"Martin Router King 607\n"
"Martin Router King 608\n"
"Martin Router King 609\n"
"Martin Router King 610\n"
"Martin Router King 611\n"
"Martin Router King 612\n"
"Martin Router King 613\n"
"Martin Router King 614\n"
"Martin Router King 615\n"
"Martin Router King 616\n"
"Martin Router King 617\n"
"Martin Router King 618\n"
"Martin Router King 619\n"
"Martin Router King 620\n"
"Martin Router King 621\n"
"Martin Router King 622\n"
"Martin Router King 623\n"
"Martin Router King 624\n"
"Martin Router King 625\n"
"Martin Router King 626\n"
"Martin Router King 627\n"
"Martin Router King 628\n"
"Martin Router King 629\n"
"Martin Router King 630\n"
"Martin Router King 631\n"
"Martin Router King 632\n"
"Martin Router King 633\n"
"Martin Router King 634\n"
"Martin Router King 635\n"
"Martin Router King 636\n"
"Martin Router King 637\n"
"Martin Router King 638\n"
"Martin Router King 639\n"
"Martin Router King 640\n"
"Martin Router King 641\n"
"Martin Router King 642\n"
"Martin Router King 643\n"
"Martin Router King 644\n"
"Martin Router King 645\n"
"Martin Router King 646\n"
"Martin Router King 647\n"
"Martin Router King 648\n"
"Martin Router King 649\n"
"Martin Router King 650\n"
"Martin Router King 651\n"
"Martin Router King 652\n"
"Martin Router King 653\n"
"Martin Router King 654\n"
"Martin Router King 655\n"
"Martin Router King 656\n"
"Martin Router King 657\n"
"Martin Router King 658\n"
"Martin Router King 659\n"
"Martin Router King 660\n"
"Martin Router King 661\n"
"Martin Router King 662\n"
"Martin Router King 663\n"
"Martin Router King 664\n"
"Martin Router King 665\n"
"Martin Router King 666\n"
"Martin Router King 667\n"
"Martin Router King 668\n"
"Martin Router King 669\n"
"Martin Router King 670\n"
"Martin Router King 671\n"
"Martin Router King 672\n"
"Martin Router King 673\n"
"Martin Router King 674\n"
"Martin Router King 675\n"
"Martin Router King 676\n"
"Martin Router King 677\n"
"Martin Router King 678\n"
"Martin Router King 679\n"
"Martin Router King 680\n"
"Martin Router King 681\n"
"Martin Router King 682\n"
"Martin Router King 683\n"
"Martin Router King 684\n"
"Martin Router King 685\n"
"Martin Router King 686\n"
"Martin Router King 687\n"
"Martin Router King 688\n"
"Martin Router King 689\n"
"Martin Router King 690\n"
"Martin Router King 691\n"
"Martin Router King 692\n"
"Martin Router King 693\n"
"Martin Router King 694\n"
"Martin Router King 695\n"
"Martin Router King 696\n"
"Martin Router King 697\n"
"Martin Router King 698\n"
"Martin Router King 699\n"
"Martin Router King 700\n"
"Martin Router King 701\n"
"Martin Router King 702\n"
"Martin Router King 703\n"
"Martin Router King 704\n"
"Martin Router King 705\n"
"Martin Router King 706\n"
"Martin Router King 707\n"
"Martin Router King 708\n"
"Martin Router King 709\n"
"Martin Router King 710\n"
"Martin Router King 711\n"
"Martin Router King 712\n"
"Martin Router King 713\n"
"Martin Router King 714\n"
"Martin Router King 715\n"
"Martin Router King 716\n"
"Martin Router King 717\n"
"Martin Router King 718\n"
"Martin Router King 719\n"
"Martin Router King 720\n"
"Martin Router King 721\n"
"Martin Router King 722\n"
"Martin Router King 723\n"
"Martin Router King 724\n"
"Martin Router King 725\n"
"Martin Router King 726\n"
"Martin Router King 727\n"
"Martin Router King 728\n"
"Martin Router King 729\n"
"Martin Router King 730\n"
"Martin Router King 731\n"
"Martin Router King 732\n"
"Martin Router King 733\n"
"Martin Router King 734\n"
"Martin Router King 735\n"
"Martin Router King 736\n"
"Martin Router King 737\n"
"Martin Router King 738\n"
"Martin Router King 739\n"
"Martin Router King 740\n"
"Martin Router King 741\n"
"Martin Router King 742\n"
"Martin Router King 743\n"
"Martin Router King 744\n"
"Martin Router King 745\n"
"Martin Router King 746\n"
"Martin Router King 747\n"
"Martin Router King 748\n"
"Martin Router King 749\n"
"Martin Router King 750\n"
"Martin Router King 751\n"
"Martin Router King 752\n"
"Martin Router King 753\n"
"Martin Router King 754\n"
"Martin Router King 755\n"
"Martin Router King 756\n"
"Martin Router King 757\n"
"Martin Router King 758\n"
"Martin Router King 759\n"
"Martin Router King 760\n"
"Martin Router King 761\n"
"Martin Router King 762\n"
"Martin Router King 763\n"
"Martin Router King 764\n"
"Martin Router King 765\n"
"Martin Router King 766\n"
"Martin Router King 767\n"
"Martin Router King 768\n"
"Martin Router King 769\n"
"Martin Router King 770\n"
"Martin Router King 771\n"
"Martin Router King 772\n"
"Martin Router King 773\n"
"Martin Router King 774\n"
"Martin Router King 775\n"
"Martin Router King 776\n"
"Martin Router King 777\n"
"Martin Router King 778\n"
"Martin Router King 779\n"
"Martin Router King 780\n"
"Martin Router King 781\n"
"Martin Router King 782\n"
"Martin Router King 783\n"
"Martin Router King 784\n"
"Martin Router King 785\n"
"Martin Router King 786\n"
"Martin Router King 787\n"
"Martin Router King 788\n"
"Martin Router King 789\n"
"Martin Router King 790\n"
"Martin Router King 791\n"
"Martin Router King 792\n"
"Martin Router King 793\n"
"Martin Router King 794\n"
"Martin Router King 795\n"
"Martin Router King 796\n"
"Martin Router King 797\n"
"Martin Router King 798\n"
"Martin Router King 799\n"
"Martin Router King 800\n"
"Martin Router King 801\n"
"Martin Router King 802\n"
"Martin Router King 803\n"
"Martin Router King 804\n"
"Martin Router King 805\n"
"Martin Router King 806\n"
"Martin Router King 807\n"
"Martin Router King 808\n"
"Martin Router King 809\n"
"Martin Router King 810\n"
"Martin Router King 811\n"
"Martin Router King 812\n"
"Martin Router King 813\n"
"Martin Router King 814\n"
"Martin Router King 815\n"
"Martin Router King 816\n"
"Martin Router King 817\n"
"Martin Router King 818\n"
"Martin Router King 819\n"
"Martin Router King 820\n"
"Martin Router King 821\n"
"Martin Router King 822\n"
"Martin Router King 823\n"
"Martin Router King 824\n"
"Martin Router King 825\n"
"Martin Router King 826\n"
"Martin Router King 827\n"
"Martin Router King 828\n"
"Martin Router King 829\n"
"Martin Router King 830\n"
"Martin Router King 831\n"
"Martin Router King 832\n"
"Martin Router King 833\n"
"Martin Router King 834\n"
"Martin Router King 835\n"
"Martin Router King 836\n"
"Martin Router King 837\n"
"Martin Router King 838\n"
"Martin Router King 839\n"
"Martin Router King 840\n"
"Martin Router King 841\n"
"Martin Router King 842\n"
"Martin Router King 843\n"
"Martin Router King 844\n"
"Martin Router King 845\n"
"Martin Router King 846\n"
"Martin Router King 847\n"
"Martin Router King 848\n"
"Martin Router King 849\n"
"Martin Router King 850\n"
"Martin Router King 851\n"
"Martin Router King 852\n"
"Martin Router King 853\n"
"Martin Router King 854\n"
"Martin Router King 855\n"
"Martin Router King 856\n"
"Martin Router King 857\n"
"Martin Router King 858\n"
"Martin Router King 859\n"
"Martin Router King 860\n"
"Martin Router King 861\n"
"Martin Router King 862\n"
"Martin Router King 863\n"
"Martin Router King 864\n"
"Martin Router King 865\n"
"Martin Router King 866\n"
"Martin Router King 867\n"
"Martin Router King 868\n"
"Martin Router King 869\n"
"Martin Router King 870\n"
"Martin Router King 871\n"
"Martin Router King 872\n"
"Martin Router King 873\n"
"Martin Router King 874\n"
"Martin Router King 875\n"
"Martin Router King 876\n"
"Martin Router King 877\n"
"Martin Router King 878\n"
"Martin Router King 879\n"
"Martin Router King 880\n"
"Martin Router King 881\n"
"Martin Router King 882\n"
"Martin Router King 883\n"
"Martin Router King 884\n"
"Martin Router King 885\n"
"Martin Router King 886\n"
"Martin Router King 887\n"
"Martin Router King 888\n"
"Martin Router King 889\n"
"Martin Router King 890\n"
"Martin Router King 891\n"
"Martin Router King 892\n"
"Martin Router King 893\n"
"Martin Router King 894\n"
"Martin Router King 895\n"
"Martin Router King 896\n"
"Martin Router King 897\n"
"Martin Router King 898\n"
"Martin Router King 899\n"
"Martin Router King 900\n"
"Martin Router King 901\n"
"Martin Router King 902\n"
"Martin Router King 903\n"
"Martin Router King 904\n"
"Martin Router King 905\n"
"Martin Router King 906\n"
"Martin Router King 907\n"
"Martin Router King 908\n"
"Martin Router King 909\n"
"Martin Router King 910\n"
"Martin Router King 911\n"
"Martin Router King 912\n"
"Martin Router King 913\n"
"Martin Router King 914\n"
"Martin Router King 915\n"
"Martin Router King 916\n"
"Martin Router King 917\n"
"Martin Router King 918\n"
"Martin Router King 919\n"
"Martin Router King 920\n"
"Martin Router King 921\n"
"Martin Router King 922\n"
"Martin Router King 923\n"
"Martin Router King 924\n"
"Martin Router King 925\n"
"Martin Router King 926\n"
"Martin Router King 927\n"
"Martin Router King 928\n"
"Martin Router King 929\n"
"Martin Router King 930\n"
"Martin Router King 931\n"
"Martin Router King 932\n"
"Martin Router King 933\n"
"Martin Router King 934\n"
"Martin Router King 935\n"
"Martin Router King 936\n"
"Martin Router King 937\n"
"Martin Router King 938\n"
"Martin Router King 939\n"
"Martin Router King 940\n"
"Martin Router King 941\n"
"Martin Router King 942\n"
"Martin Router King 943\n"
"Martin Router King 944\n"
"Martin Router King 945\n"
"Martin Router King 946\n"
"Martin Router King 947\n"
"Martin Router King 948\n"
"Martin Router King 949\n"
"Martin Router King 950\n"
"Martin Router King 951\n"
"Martin Router King 952\n"
"Martin Router King 953\n"
"Martin Router King 954\n"
"Martin Router King 955\n"
"Martin Router King 956\n"
"Martin Router King 957\n"
"Martin Router King 958\n"
"Martin Router King 959\n"
"Martin Router King 960\n"
"Martin Router King 961\n"
"Martin Router King 962\n"
"Martin Router King 963\n"
"Martin Router King 964\n"
"Martin Router King 965\n"
"Martin Router King 966\n"
"Martin Router King 967\n"
"Martin Router King 968\n"
"Martin Router King 969\n"
"Martin Router King 970\n"
"Martin Router King 971\n"
"Martin Router King 972\n"
"Martin Router King 973\n"
"Martin Router King 974\n"
"Martin Router King 975\n"
"Martin Router King 976\n"
"Martin Router King 977\n"
"Martin Router King 978\n"
"Martin Router King 979\n"
"Martin Router King 980\n"
"Martin Router King 981\n"
"Martin Router King 982\n"
"Martin Router King 983\n"
"Martin Router King 984\n"
"Martin Router King 985\n"
"Martin Router King 986\n"
"Martin Router King 987\n"
"Martin Router King 988\n"
"Martin Router King 989\n"
"Martin Router King 990\n"
"Martin Router King 991\n"
"Martin Router King 992\n"
"Martin Router King 993\n"
"Martin Router King 994\n"
"Martin Router King 995\n"
"Martin Router King 996\n"
"Martin Router King 997\n"
"Martin Router King 998\n"
"Martin Router King 999\n"
"Martin Router King 1000\n"
};
#include <ESP8266WiFi.h>
extern "C" {
#include "user_interface.h"
  typedef void (*freedom_outside_cb_t)(uint8 status);
  int wifi_register_send_pkt_freedom_cb(freedom_outside_cb_t cb);
  void wifi_unregister_send_pkt_freedom_cb(void);
  int wifi_send_pkt_freedom(uint8 *buf, int len, bool sys_seq);
}
char emptySSID[32];
uint8_t channelIndex = 0;
uint8_t macAddr[6];
uint8_t wifi_channel = 1;
uint32_t currentTime = 0;
uint32_t packetSize = 0;
uint32_t packetCounter = 0;
uint32_t attackTime = 0;
uint32_t packetRateTime = 0;
uint8_t beaconPacket[109] = {
  /*  0 - 3  */ 0x80, 0x00, 0x00, 0x00,             // Type/Subtype: managment beacon frame
  /*  4 - 9  */ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Destination: broadcast
  /* 10 - 15 */ 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, // Src
  /* 16 - 21 */ 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, // Src

  // Fixed parameters
  /* 22 - 23 */ 0x00, 0x00,                         // Fragment & sequence number (SDK)
  /* 24 - 31 */ 0x83, 0x51, 0xf7, 0x8f, 0x0f, 0x00, 0x00, 0x00, // Timestamp
  /* 32 - 33 */ 0xe8, 0x03,                         // Interval: 0x64, 0x00 => every 100ms - 0xe8, 0x03 => every 1s
  /* 34 - 35 */ 0x31, 0x00,                         // capabilities Tnformation

  // Tagged parameters

  // SSID parameters
  /* 36 - 37 */ 0x00, 0x20,                         // Tag: Set SSID length, Tag length: 32
  /* 38 - 69 */ 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,                           // SSID

  // Supported Rates
  /* 70 - 71 */ 0x01, 0x08,                         // Tag: Supported Rates, Tag length: 8
  /* 72 */ 0x82,                    // 1(B)
  /* 73 */ 0x84,                    // 2(B)
  /* 74 */ 0x8b,                    // 5.5(B)
  /* 75 */ 0x96,                    // 11(B)
  /* 76 */ 0x24,                    // 18
  /* 77 */ 0x30,                    // 24
  /* 78 */ 0x48,                    // 36
  /* 79 */ 0x6c,                    // 54

  // Current Channel
  /* 80 - 81 */ 0x03, 0x01,         // Channel set, length
  /* 82 */      0x01,               // Current Channel

  // RSN information
  /*  83 -  84 */ 0x30, 0x18,
  /*  85 -  86 */ 0x01, 0x00,
  /*  87 -  90 */ 0x00, 0x0f, 0xac, 0x02,
  /*  91 -  92 */ 0x02, 0x00,
  /*  93 - 100 */ 0x00, 0x0f, 0xac, 0x04, 0x00, 0x0f, 0xac, 0x04, /*Fix: changed 0x02(TKIP) to 0x04(CCMP) is default. WPA2 with TKIP not supported by many devices*/
  /* 101 - 102 */ 0x01, 0x00,
  /* 103 - 106 */ 0x00, 0x0f, 0xac, 0x02,
  /* 107 - 108 */ 0x00, 0x00
};
// Shift
void nextChannel() {
  if (sizeof(channels) > 1) {
    uint8_t ch = channels[channelIndex];
    channelIndex++;
    if (channelIndex > sizeof(channels)) channelIndex = 0;

    if (ch != wifi_channel && ch >= 1 && ch <= 14) {
      wifi_channel = ch;
      wifi_set_channel(wifi_channel);
    }
  }
}

void randomMac() {
  for (int i = 0; i < 6; i++){
     macAddr[i] = random(256);
  }
}

void setup() {
//  u8g2.begin();
//  u8g2.setFont(u8g2_font_NokiaLargeBold_tr);
  for (int i = 0; i < 32; i++)
    emptySSID[i] = ' ';
  randomSeed(os_random());
  packetSize = sizeof(beaconPacket);
  if (wpa2) {
    beaconPacket[34] = 0x31;
  } else {
    beaconPacket[34] = 0x21;
    packetSize -= 26;
  }  
  randomMac();  
  Serial.begin(115200);
  Serial.println();
  currentTime = millis();
  WiFi.mode(WIFI_OFF);
  wifi_set_opmode(STATION_MODE);
  wifi_set_channel(channels[0]);
  Serial.println("SSIDs:");
  int i = 0;
  int len = sizeof(ssids);
  while (i < len) {
    Serial.print((char)pgm_read_byte(ssids + i));
    i++;
  }
  Serial.println();
  Serial.println("Started \\o/");
  Serial.println();
}

void loop() {
  unsigned long currentTime = millis();
//  u8g2.clearBuffer();
//  u8g2.drawStr(0, 30, "->      ");
//  u8g2.drawStr(u8g2.getStrWidth("-      ") + 10, 30, String(packetCounter).c_str());
//  u8g2.setCursor(u8g2.getStrWidth("                      ") + 10, 30);
//  u8g2.print(spinnerChars[spinnerIndex]);
//  u8g2.setCursor(u8g2.getStrWidth("                      ") + 10, 48);
//  u8g2.print(spinnerChars[spinnerIndex]);
//  u8g2.sendBuffer();
//  spinnerIndex = (spinnerIndex + 1) % 4;
  if (currentTime - packetRateTime > 1000) {
    packetRateTime = currentTime;
//    u8g2.clearBuffer();
//    u8g2.drawStr(0, 30, "-->      ");
//    u8g2.drawStr(u8g2.getStrWidth("-      ") + 10, 30, String(packetCounter).c_str());
//    u8g2.setCursor(u8g2.getStrWidth("                      ") + 10, 30);
//    u8g2.print(spinnerChars[spinnerIndex]);
//    u8g2.setCursor(u8g2.getStrWidth("   ") + 10, 48);
//    u8g2.print("     UP");
//    u8g2.setCursor(u8g2.getStrWidth("                      ") + 10, 48);
//    u8g2.print(spinnerChars[spinnerIndex]);
//    u8g2.sendBuffer();
    packetCounter = 0;
  }
  packetCounter++;
  if (currentTime - attackTime > 100) {
    attackTime = currentTime;
    int i = 0;
    int j = 0;
    int ssidNum = 1;
    char tmp;
    int ssidsLen = strlen_P(ssids);
    bool sent = false;
    nextChannel();
    while (i < ssidsLen) {
      j = 0;
      do {
        tmp = pgm_read_byte(ssids + i + j);
        j++;
      } while (tmp != '\n' && j <= 32 && i + j < ssidsLen);
      uint8_t ssidLen = j - 1;
      macAddr[5] = ssidNum;
      ssidNum++;
      memcpy(&beaconPacket[10], macAddr, 6);
      memcpy(&beaconPacket[16], macAddr, 6);
      memcpy(&beaconPacket[38], emptySSID, 32);
      memcpy_P(&beaconPacket[38], &ssids[i], ssidLen);
      beaconPacket[82] = wifi_channel;
      if (appendSpaces) {
        for (int k = 0; k < 3; k++) {
          packetCounter += wifi_send_pkt_freedom(beaconPacket, packetSize, 0) == 0;
          delay(1);
        }
      }
      else {
        uint16_t tmpPacketSize = (packetSize - 32) + ssidLen; 
        uint8_t* tmpPacket = new uint8_t[tmpPacketSize]; 
        memcpy(&tmpPacket[0], &beaconPacket[0], 38 + ssidLen); 
        tmpPacket[37] = ssidLen; 
        memcpy(&tmpPacket[38 + ssidLen], &beaconPacket[70], wpa2 ? 39 : 13); 
        for (int k = 0; k < 3; k++) {
          packetCounter += wifi_send_pkt_freedom(tmpPacket, tmpPacketSize, 0) == 0;
          delay(1);
        }
        delete tmpPacket; 
      }
      i += j;
    }
  }
  if (currentTime - packetRateTime > 1000) {
    packetRateTime = currentTime;
    Serial.print(packetCounter);    
    Serial.println("p/s");
    packetCounter = 0;
  }
}
